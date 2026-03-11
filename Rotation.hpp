/**
 * @file Rotation.hpp
 * @author [Your Name]
 * @date [Current Date]
 * @brief Base class for different rotation representations.
 */

#ifndef ROTATION_HPP
#define ROTATION_HPP

#include <string>
#include <iostream>

class Rotation {
public:
    /**
     * @post: Initializes the type_ member variable.
     */
    Rotation(std::string type);

    /**
     * @return: The type of rotation (e.g., "EULER", "AXIS_ANGLE", "QUATERNION").
     */
    std::string getType() const;

    /**
     * @brief Virtual destructor to ensure proper cleanup of derived classes.
     */
    virtual ~Rotation() = default;

protected:
    std::string type_;
};

#endif