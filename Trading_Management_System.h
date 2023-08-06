
#ifndef TRADING_MANAGEMENT_SYSTEM_H
#define TRADING_MANAGEMENT_SYSTEM_H

#include <string>

/**
  * class Trading_Management_System
  * 
  */

class Trading_Management_System
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Trading_Management_System ();

  /**
   * Empty Destructor
   */
  virtual ~Trading_Management_System ();

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
  void transport ()
  {
  }


  /**
   */
  void delivery_product ()
  {
  }


  /**
   */
  void money_transfer ()
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

  void verify_product;
  void amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of verify_product
   * @param new_var the new value of verify_product
   */
  void setVerify_product (void new_var)   {
      verify_product = new_var;
  }

  /**
   * Get the value of verify_product
   * @return the value of verify_product
   */
  void getVerify_product ()   {
    return verify_product;
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

#endif // TRADING_MANAGEMENT_SYSTEM_H
