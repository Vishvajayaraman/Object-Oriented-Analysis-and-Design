
#ifndef VEHICLE_TYPE_CLASS_H
#define VEHICLE_TYPE_CLASS_H

#include <string>
#include vector



/**
  * class Vehicle_type_class
  * 
  */

class Vehicle_type_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Vehicle_type_class ();

  /**
   * Empty Destructor
   */
  virtual ~Vehicle_type_class ();

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
  void addvehicletype ()
  {
  }


  /**
   */
  void editvehicle_type ()
  {
  }


  /**
   */
  void delete_vehicle_type ()
  {
  }


  /**
   */
  void searchvehicle_type ()
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

  void vehicle_type_id;
  void vehicle_type_name;
  void vehicle_type_description;
  void vehicle_type_customer_id;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of vehicle_type_id
   * @param new_var the new value of vehicle_type_id
   */
  void setVehicle_type_id (void new_var)   {
      vehicle_type_id = new_var;
  }

  /**
   * Get the value of vehicle_type_id
   * @return the value of vehicle_type_id
   */
  void getVehicle_type_id ()   {
    return vehicle_type_id;
  }

  /**
   * Set the value of vehicle_type_name
   * @param new_var the new value of vehicle_type_name
   */
  void setVehicle_type_name (void new_var)   {
      vehicle_type_name = new_var;
  }

  /**
   * Get the value of vehicle_type_name
   * @return the value of vehicle_type_name
   */
  void getVehicle_type_name ()   {
    return vehicle_type_name;
  }

  /**
   * Set the value of vehicle_type_description
   * @param new_var the new value of vehicle_type_description
   */
  void setVehicle_type_description (void new_var)   {
      vehicle_type_description = new_var;
  }

  /**
   * Get the value of vehicle_type_description
   * @return the value of vehicle_type_description
   */
  void getVehicle_type_description ()   {
    return vehicle_type_description;
  }

  /**
   * Set the value of vehicle_type_customer_id
   * @param new_var the new value of vehicle_type_customer_id
   */
  void setVehicle_type_customer_id (void new_var)   {
      vehicle_type_customer_id = new_var;
  }

  /**
   * Get the value of vehicle_type_customer_id
   * @return the value of vehicle_type_customer_id
   */
  void getVehicle_type_customer_id ()   {
    return vehicle_type_customer_id;
  }
private:


  void initAttributes () ;

};

#endif // VEHICLE_TYPE_CLASS_H
