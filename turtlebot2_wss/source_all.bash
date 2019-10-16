#! /bin/bash 

TURTLEBOT_DRIVERS_WS=~/Roco318/turtlebot2_wss/turtlebot_ws
TURTLEBOT_SIMULATION_WS=~/Roco318/turtlebot2_wss/turtlebot_simulation
TURTLEBOT_INTERACTION_WS=~/Roco318/turtlebot2_wss/turtlebot_interaction

source $TURTLEBOT_DRIVERS_WS/devel/setup.bash --extend
source $TURTLEBOT_SIMULATION_WS/devel/setup.bash --extend
source $TURTLEBOT_INTERACTION_WS/devel/setup.bash --extend
