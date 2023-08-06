
#ifndef RECEPTIONIST_H
#define RECEPTIONIST_H
#include "user.h"

#include <string>
#include vector



/**
  * class Receptionist
  * 
  */

class Receptionist : public user
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Receptionist ();

  /**
   * Empty Destructor
   */
  virtual ~Receptionist ();

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
  void GiveApoint ()
  {
  }


  /**
   */
  void GenerateBill ()
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

  void id;
  void Name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
  }

  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (void new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  void getName ()   {
    return Name;
  }
private:


  void initAttributes () ;

};

#endif // RECEPTIONIST_H
