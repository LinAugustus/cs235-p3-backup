/**
 * @file AxisAngleRotation.cpp
 * @author Augustus Lin
 * @date 3/3/2026
 * @brief Implementation of the AxisAngleRotation class methods.
 */

#include "AxisAngleRotation.hpp"

/**
 * @post: Initializes type_ to "AXIS_ANGLE", axis to (0,0,0), and angle to 0.
 */
AxisAngleRotation::AxisAngleRotation() 
    : Rotation("AXIS_ANGLE"), axis_(0,0,0), angle_(0) {}

/**
 * @param axis: The vector axis to rotate around.
 * @param angle: The angle of rotation.
 * @post: Initializes type_ to "AXIS_ANGLE" and sets members to parameters.
 */
AxisAngleRotation::AxisAngleRotation(const Vector3D& axis, double angle) 
    : Rotation("AXIS_ANGLE"), axis_(axis), angle_(angle) {}

/**
 * @return: The value of axis_
 * @note: This function should be marked const!
 */
Vector3D AxisAngleRotation::getAxis() const { return axis_; }

/**
 * @return: The value of angle_
 * @note: This function should be marked const!
 */
double AxisAngleRotation::getAngle() const { return angle_; }

bool AxisAngleRotation::operator==(const AxisAngleRotation& Axs) const
{
    double eps=0.001;
    bool aEqual= axis_ ==Axs.getAxis();
    double aDiff=std::abs(angle_-Axs.getAngle());
    if(aEqual&& aDiff<eps)
    {
        return true;
    }
    return false;
    
    
    
}