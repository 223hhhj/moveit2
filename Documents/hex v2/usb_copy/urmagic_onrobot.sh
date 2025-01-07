#!/bin/bash

if [ -z $DISPLAY ]; then
  export DISPLAY=:0
fi

#file copy with detect
MOUNTPOINT="$1"

cd "$MOUNTPOINT"

get_confirmation()
{
	xmessage  -center -buttons Install:1,Cancel:2 \
"Would you like to copy OnRobot files onto the robot?"
	EXIT=$?
	INSTALL=0
	if (( EXIT == 1 )); then
		INSTALL=1
	fi
}

. /etc/profile

#Ask for install
get_confirmation
if (( INSTALL != 1 )); then
	exit 0
fi

# function copy_urcap() {
#     urcap_filter="OnRobot-FT*.urcap"
#     urcap_installed_filter="OnRobot-FT*.jar"
#     urcap_installed_com_of_filter="com.optoforce.*.jar"
#     urcap_installed_of_filter="OptoForceForceTorqueSensor*.jar"
#     urcap_source_filter="$MOUNTPOINT/OnRobot_UR_Caps/*.urcap"
#     urcap_target_folder="/root/.urcaps/"

#     cd $urcap_target_folder

#     #Remove old urcaps
#     rm -f $urcap_installed_filter

#     rm -f $urcap_installed_com_of_filter

#     rm -f $urcap_installed_of_filter

#     #Copy current urcap
#     cp -f $urcap_source_filter $urcap_target_folder

#     #Rename urcap to jar for auto load
#     for file in ${urcap_filter[*]}
#     do
#       mv "$file" "${file%.urcap}.jar"
#     done
# }

function copy_examples_and_urcap() {
    SOURCE="$MOUNTPOINT/OnRobot_UR_Programs/*.*"
    DEST="/programs/OnRobot_UR_Programs"
    mkdir $DEST
    cp -f -u $SOURCE $DEST #copy only if source file is newer 

    # Make sure data is written to the USB key
    sync
    sync
    sync
}

function copy_config() {
    SOURCE="$MOUNTPOINT/OnRobot_UR_Config/*.*"
    DEST="/root/GUI"
    # mkdir $DEST
    cp -f -u $SOURCE $DEST #copy only if not exists

    # Make sure data is written to the USB key
    sync
    sync
}

# copy_urcap
copy_examples_and_urcap
copy_config

cd "$MOUNTPOINT"

DISPLAY=:0 java onrobot

# pkill java



