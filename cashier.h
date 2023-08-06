
#ifndef CASHIER_H
#define CASHIER_H

#include <string>

/**
  * class cashier
  * 
  */

class cashier
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  cashier ();

  /**
   * Empty Destructor
   */
  virtual ~cashier ();

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
  void enter_amount ()
  {
  }


  /**
   */
  void swipe_card ()
  {
  }


  /**
   */
  void print_bill ()
  {
  }


  /**
   */
  void deliver_product ()
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

  void product_name;
  void cost_of_product;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of product_name
   * @param new_var the new value of product_name
   */
  void setProduct_name (void new_var)   {
      product_name = new_var;
  }

  /**
   * Get the value of product_name
   * @return the value of product_name
   */
  void getProduct_name ()   {
    return product_name;
  }

  /**
   * Set the value of cost_of_product
   * @param new_var the new value of cost_of_product
   */
  void setCost_of_product (void new_var)   {
      cost_of_product = new_var;
  }

  /**
   * Get the value of cost_of_product
   * @return the value of cost_of_product
   */
  void getCost_of_product ()   {
    return cost_of_product;
  }
private:


  void initAttributes () ;

};

#endif // CASHIER_H
