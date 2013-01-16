#ifndef ROBOTMAP_H
#define ROBOTMAP_H


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
const int MOTOR_0 = ;///<bottom
const int MOTOR_1 = ;///<top

const int ENCODER_0_A = 1;///<bottom 
const int ENCODER_0_B = 3;

const int ENCODER_1_A = 5;///<top
const int ENCODER_1_B = 7;

const int ENCODER_DISTANCE_PER_PULSE = 64;//TODO: Put number here

#endif
