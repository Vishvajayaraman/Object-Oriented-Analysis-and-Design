
#ifndef BILLING_H
#define BILLING_H

#include <string>
#include vector



/**
  * class Billing
  * 
  */

class Billing
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Billing ();

  /**
   * Empty Destructor
   */
  virtual ~Billing ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void number;
  void Id;
  void name;
  void amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of number
   * @param new_var the new value of number
   */
  void setNumber (void new_var)   {
      number = new_var;
  }

  /**
   * Get the value of number
   * @return the value of number
   */
  void getNumber ()   {
    return number;
  }

  /**
   * Set the value of Id
   * @param new_var the new value of Id
   */
  void setId (void new_var)   {
      Id = new_var;
  }

  /**
   * Get the value of Id
   * @return the value of Id
   */
  void getId ()   {
    return Id;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of amount
   * @param new_var the new value of amount
   */
  void setAmount (void new_var)   {
      amount = new_var;
  }

  /**
   * Get the value of amount
   * @return the value of amount
   */
  void getAmount ()   {
    return amount;
  }
private:


  void initAttributes () ;

};

#endif // BILLING_H
