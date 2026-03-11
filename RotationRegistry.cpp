/**
 * @file RotationRegistry.cpp
 * @author Augustus Lin
 * @date [Current Date]3/11/2026
 * @brief Implementation of RotationRegistry
 */

 #include"RotationRegistry.hpp"


     /**
* @post: Initializes the RotationRegistry as an empty ArrayBag of Rotation pointers.
*/
    RotationRegistry::RotationRegistry():ArrayBag<Rotation*>()
    {
        

    }

/**
* @param rotation: A pointer to a Rotation object.
* @return: True if the rotation was successfully added, false otherwise.
* @post: Adds a rotation to the registry.
*/
bool RotationRegistry::addRotation(Rotation* rotation)
{
    return add(rotation);

}

/**
* @return: The count of QuaternionRotation objects in the registry.
*/

int RotationRegistry::countQuaternions() const
{
    int count =0;
    
    std::vector<Rotation*> vec= toVector();
    for(Rotation* r:vec)
    {
        if(dynamic_cast<QuaternionRotation*>(r) != nullptr)
        {
            count ++;
        }
    }
    return count;


}

/**
* @return: The average magnitude of the axes in all AxisAngleRotation objects in the
registry.
* Returns 0.0 if no AxisAngleRotations exist.
*/
double RotationRegistry::getAverageMagnitude() const
{

    int count=0;
    double ave=0.0;
    
    std::vector<Rotation*> vec= toVector();
    for(Rotation* r:vec)
    {
        AxisAngleRotation* a = dynamic_cast<AxisAngleRotation*>(r);
        if(a != nullptr)
        {
            count ++;
            
            Vector3D axe=a ->getAxis();
            ave+=axe.calculateMagnitude();


        }
    }
    if(count==0)
    {
        return 0.0;
    }
    return ave/count;

}
