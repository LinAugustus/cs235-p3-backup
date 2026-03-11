/**
 * @file AxisAngleRotation.hpp
 * @author Augustus Lin
 * @date 3/3/2026
 * @brief Subclass representing rotation around a specific axis.
 */

#ifndef AXISANGLEROTATION_HPP
#define AXISANGLEROTATION_HPP

#include "Rotation.hpp"
#include "Vector3D.hpp" // Dependency from Project 1

class AxisAngleRotation : public Rotation {
public:
    /**
     * @post: Initializes type_ to "AXIS_ANGLE", axis to (0,0,0), and angle to 0.
     */
    AxisAngleRotation();

    /**
     * @param axis: The vector axis to rotate around.
     * @param angle: The angle of rotation.
     * @post: Initializes type_ to "AXIS_ANGLE" and sets members to parameters.
     */
    AxisAngleRotation(const Vector3D& axis, double angle);

    /**
     * @return: The value of axis_
     * @note: This function should be marked const!
     */
    Vector3D getAxis() const;

    /**
     * @return: The value of angle_
     * @note: This function should be marked const!
     */
    double getAngle() const;

    /**
* @param other: A const-ref to the AxisAngleRotation to compare with.
* @return: True if both the axis and angle are equal, false otherwise.
* @note: Use the Vector3D equality operator to compare the axis, and epsilon tolerance for
the angle.
*/
bool operator==(const AxisAngleRotation& other) const;


private:
    Vector3D axis_;
    double angle_;
};

#endif