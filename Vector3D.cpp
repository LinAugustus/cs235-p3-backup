/**
 * @file Vector3D.cpp
 * @author Augustus Lin
 * @date 3/3/2026
 * @brief Implementation of the Vector3D class methods.
 */

#include "Vector3D.hpp"
#include <iomanip>
#include <cmath>

/**
 * @post: Initializes x_, y_, and z_ to 0.0.
 */
Vector3D::Vector3D() : x_(0.0), y_(0.0), z_(0.0) {}

/**
 * @param x, y, z: Values to initialize the vector.
 * @post: Initializes x_, y_, and z_ to the provided values.
 */
Vector3D::Vector3D(double x, double y, double z) : x_(x), y_(y), z_(z) {}


/**
 * @return: The value of the x_ component.
 */
double Vector3D::getX() const { return x_; }

/**
 * @param x: The value to set for the x_ component.
 * @post: Updates the x_ component.
 */
void Vector3D::setX(double x) { x_ = x; }

/**
 * @return: The value of the y_ component.
 */
double Vector3D::getY() const { return y_; }

/**
 * @param y: The value to set for the y_ component.
 * @post: Updates the y_ component.
 */
void Vector3D::setY(double y) { y_ = y; }

/**
 * @return: The value of the z_ component.
 */
double Vector3D::getZ() const { return z_; }

/**
 * @param z: The value to set for the z_ component.
 * @post: Updates the z_ component.
 */
void Vector3D::setZ(double z) { z_ = z; }

/**
 * @return: The magnitude calculated via the Pythagorean theorem for 3D.
 */
double Vector3D::calculateMagnitude() const {
    return std::sqrt((x_ * x_) + (y_ * y_) + (z_ * z_));
}

/**
 * @post: Normalizes the vector components to range [0, 1].
 */
void Vector3D::normalize() {
    double mag = calculateMagnitude();
    if (mag > 0) {
        x_ /= mag;
        y_ /= mag;
        z_ /= mag;
    }
}

/**
 * @post: Formats the output for console display.
 */
void Vector3D::display() const {
    std::cout << "Vector[" << std::fixed << std::setprecision(2) 
              << x_ << ", " << y_ << ", " << z_ << "]" << std::endl;
}

/**
    * @param other: A const-ref to the Vector3D to compare with.
    * @return: True if all components (x, y, z) are equal within epsilon tolerance, false otherwise.
 */
    bool Vector3D::operator==(const Vector3D& vec) const
    {
        double xDiff=std::abs(x_-vec.getX());
        double yDiff=std::abs(y_-vec.getY());
        double zDiff=std::abs(z_-vec.getZ());
        if(xDiff<0.001)
        {
            if(yDiff<0.001)
            {
                if(zDiff<0.001)
                {
                    return true;
                }
            }

        }
        return false;
    }