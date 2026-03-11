/**
 * @file QuaternionRotation.cpp
 * @author [Your Name]
 * @date [Current Date]
 * @brief Implementation of the QuaternionRotation class methods.
 */

#include "QuaternionRotation.hpp"

/**
 * @post: Initializes type_ to "QUATERNION" and sets all components to 0.
 */
QuaternionRotation::QuaternionRotation() 
    : Rotation("QUATERNION"), w_(0), x_(0), y_(0), z_(0) {}

/**
 * @param w, x, y, z: The quaternion components.
 * @post: Initializes type_ to "QUATERNION" and sets members to parameters.
 */
QuaternionRotation::QuaternionRotation(double w, double x, double y, double z) 
    : Rotation("QUATERNION"), w_(w), x_(x), y_(y), z_(z) {}

/**
 * @return: The value of w_
 * @note: This function should be marked const!
 */
double QuaternionRotation::getW() const { return w_; }

/**
 * @return: The value of x_
 * @note: This function should be marked const!
 */
double QuaternionRotation::getX() const { return x_; }

/**
 * @return: The value of y_
 * @note: This function should be marked const!
 */
double QuaternionRotation::getY() const { return y_; }

/**
 * @return: The value of z_
 * @note: This function should be marked const!
 */
double QuaternionRotation::getZ() const { return z_; }

 /**
* @param other: A const-ref to the QuaternionRotation to compare with.
* @return: True if all components (w, x, y, z) are equal within epsilon tolerance, false
otherwise.
*/
bool QuaternionRotation::operator==(const QuaternionRotation& other) const
{
    double eps = 0.001;

    double wDiff = std::abs(w_ - other.getW());
    double xDiff = std::abs(x_ - other.getX());
    double yDiff = std::abs(y_ - other.getY());
    double zDiff = std::abs(z_ - other.getZ());

    return (wDiff < eps && xDiff < eps && yDiff < eps && zDiff < eps);
}