
#ifndef CENTRAL_STOCK_SYSTEM_H
#define CENTRAL_STOCK_SYSTEM_H

#include <string>

/**
  * class Central_Stock_System
  * 
  */

class Central_Stock_System
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Central_Stock_System ();

  /**
   * Empty Destructor
   */
  virtual ~Central_Stock_System ();

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
  void printbill ()
  {
  }


  /**
   */
  void delivery_product ()
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

  void store_stock_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of store_stock_details
   * @param new_var the new value of store_stock_details
   */
  void setStore_stock_details (void new_var)   {
      store_stock_details = new_var;
  }

  /**
   * Get the value of store_stock_details
   * @return the value of store_stock_details
   */
  void getStore_stock_details ()   {
    return store_stock_details;
  }
private:


  void initAttributes () ;

};

#endif // CENTRAL_STOCK_SYSTEM_H
