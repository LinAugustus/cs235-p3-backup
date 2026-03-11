/**
 * @file EulerRotation.hpp
 * @author Augustus Lin
 * @date 3/3/2026
 * @brief Subclass representing rotation using Roll, Pitch, and Yaw.
 */

#ifndef EULERROTATION_HPP
#define EULERROTATION_HPP

#include "Rotation.hpp"

class EulerRotation : public Rotation {
public:
    /**
     * @post: Initializes type_ to "EULER" and sets roll, pitch, and yaw to 0.
     */
    EulerRotation();

    /**
     * @param roll, pitch, yaw: The rotation angles.
     * @post: Initializes type_ to "EULER" and sets members to parameters.
     */
    EulerRotation(double roll, double pitch, double yaw);

    /**
     * @return: The value of roll_
     * @note: This function should be marked const!
     */
    double getRoll() const;

    /**
     * @return: The value of pitch_
     * @note: This function should be marked const!
     */
    double getPitch() const;

    /**
     * @return: The value of yaw_
     * @note: This function should be marked const!
     */
    double getYaw() const;

    /**
* @param other: A const-ref to the EulerRotation to compare with.
* @return: True if roll, pitch, and yaw are equal within epsilon tolerance, false otherwise.
*/
 bool operator==(const EulerRotation& other) const;


private:
    double roll_;
    double pitch_;
    double yaw_;
};

#endif