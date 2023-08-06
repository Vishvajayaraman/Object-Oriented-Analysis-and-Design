
#ifndef FIRE_SENSOR_H
#define FIRE_SENSOR_H

#include <string>

/**
  * class fire_sensor
  * 
  */

class fire_sensor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  fire_sensor ();

  /**
   * Empty Destructor
   */
  virtual ~fire_sensor ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void monitor ()
  {
  }


  /**
   */
  void send_status ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void Fire_detected;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Fire_detected
   * @param new_var the new value of Fire_detected
   */
  void setFire_detected (void new_var)   {
      Fire_detected = new_var;
  }

  /**
   * Get the value of Fire_detected
   * @return the value of Fire_detected
   */
  void getFire_detected ()   {
    return Fire_detected;
  }
private:


  void initAttributes () ;

};

#endif // FIRE_SENSOR_H
