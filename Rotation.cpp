/**
 * @file Rotation.cpp
 * @author [Your Name]
 * @date [Current Date]
 * @brief Implementation of the Rotation base class methods.
 */

#include "Rotation.hpp"

/**
 * @param type: The type of rotation.
 * @post: Initializes the type_ member variable.
 */
Rotation::Rotation(std::string type) : type_(type) {}

/**
 * @return: The type of rotation.
 * @note: This function should be marked const!
 */
std::string Rotation::getType() const {
    return type_;
}