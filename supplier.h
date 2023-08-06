
#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <string>

/**
  * class supplier
  * 
  */

class supplier
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  supplier ();

  /**
   * Empty Destructor
   */
  virtual ~supplier ();

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
  void available_product ()
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

  void product_supply;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of product_supply
   * @param new_var the new value of product_supply
   */
  void setProduct_supply (void new_var)   {
      product_supply = new_var;
  }

  /**
   * Get the value of product_supply
   * @return the value of product_supply
   */
  void getProduct_supply ()   {
    return product_supply;
  }
private:


  void initAttributes () ;

};

#endif // SUPPLIER_H
