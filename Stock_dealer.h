
#ifndef STOCK_DEALER_H
#define STOCK_DEALER_H

#include <string>

/**
  * class Stock_dealer
  * 
  */

class Stock_dealer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Stock_dealer ();

  /**
   * Empty Destructor
   */
  virtual ~Stock_dealer ();

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
  void deliver_item ()
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

  void Take_order;
  void enter_order;
  void verify_order;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Take_order
   * @param new_var the new value of Take_order
   */
  void setTake_order (void new_var)   {
      Take_order = new_var;
  }

  /**
   * Get the value of Take_order
   * @return the value of Take_order
   */
  void getTake_order ()   {
    return Take_order;
  }

  /**
   * Set the value of enter_order
   * @param new_var the new value of enter_order
   */
  void setEnter_order (void new_var)   {
      enter_order = new_var;
  }

  /**
   * Get the value of enter_order
   * @return the value of enter_order
   */
  void getEnter_order ()   {
    return enter_order;
  }

  /**
   * Set the value of verify_order
   * @param new_var the new value of verify_order
   */
  void setVerify_order (void new_var)   {
      verify_order = new_var;
  }

  /**
   * Get the value of verify_order
   * @return the value of verify_order
   */
  void getVerify_order ()   {
    return verify_order;
  }
private:


  void initAttributes () ;

};

#endif // STOCK_DEALER_H
