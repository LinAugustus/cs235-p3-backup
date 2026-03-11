/**
 * @file QuaternionRotation.hpp
 * @author [Your Name]
 * @date [Current Date]
 * @brief Subclass representing rotation using Quaternions (w, x, y, z).
 */

#ifndef QUATERNIONROTATION_HPP
#define QUATERNIONROTATION_HPP

#include "Rotation.hpp"

class QuaternionRotation : public Rotation {
public:
    /**
     * @post: Initializes type_ to "QUATERNION" and sets all components to 0.
     */
    QuaternionRotation();

    /**
     * @param w, x, y, z: The quaternion components.
     * @post: Initializes type_ to "QUATERNION" and sets members to parameters.
     */
    QuaternionRotation(double w, double x, double y, double z);

    /**
     * @return: The value of w_
     * @note: This function should be marked const!
     */
    double getW() const;

    /**
     * @return: The value of x_
     * @note: This function should be marked const!
     */
    double getX() const;

    /**
     * @return: The value of y_
     * @note: This function should be marked const!
     */
    double getY() const;

    /**
     * @return: The value of z_
     * @note: This function should be marked const!
     */
    double getZ() const;

private:
    double w_, x_, y_, z_;
};

#endif