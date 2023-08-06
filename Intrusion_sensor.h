
#ifndef INTRUSION_SENSOR_H
#define INTRUSION_SENSOR_H

#include <string>

/**
  * class Intrusion_sensor
  * 
  */

class Intrusion_sensor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Intrusion_sensor ();

  /**
   * Empty Destructor
   */
  virtual ~Intrusion_sensor ();

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
  void monitor_detected ()
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

  void Intrusion_detected;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Intrusion_detected
   * @param new_var the new value of Intrusion_detected
   */
  void setIntrusion_detected (void new_var)   {
      Intrusion_detected = new_var;
  }

  /**
   * Get the value of Intrusion_detected
   * @return the value of Intrusion_detected
   */
  void getIntrusion_detected ()   {
    return Intrusion_detected;
  }
private:


  void initAttributes () ;

};

#endif // INTRUSION_SENSOR_H
