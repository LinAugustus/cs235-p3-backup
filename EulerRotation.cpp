/**
 * @file EulerRotation.cpp
 * @author [Your Name]
 * @date [Current Date]
 * @brief Implementation of the EulerRotation class methods.
 */

#include "EulerRotation.hpp"

EulerRotation::EulerRotation() : Rotation("EULER"), roll_(0), pitch_(0), yaw_(0) {}

EulerRotation::EulerRotation(double roll, double pitch, double yaw) 
    : Rotation("EULER"), roll_(roll), pitch_(pitch), yaw_(yaw) {}

/**
 * @return: The value of roll_
 * @note: This function should be marked const!
 */
double EulerRotation::getRoll() const { return roll_; }

/**
 * @return: The value of pitch_
 * @note: This function should be marked const!
 */
double EulerRotation::getPitch() const { return pitch_; }

/**
 * @return: The value of yaw_
 * @note: This function should be marked const!
 */
double EulerRotation::getYaw() const { return yaw_; }