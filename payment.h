
#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
#include vector



/**
  * class payment
  * 
  */

class payment
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  payment ();

  /**
   * Empty Destructor
   */
  virtual ~payment ();

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

  void amount;
  void payment_option;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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

  /**
   * Set the value of payment_option
   * @param new_var the new value of payment_option
   */
  void setPayment_option (void new_var)   {
      payment_option = new_var;
  }

  /**
   * Get the value of payment_option
   * @return the value of payment_option
   */
  void getPayment_option ()   {
    return payment_option;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_H
