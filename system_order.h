
#ifndef SYSTEM_ORDER_H
#define SYSTEM_ORDER_H

#include <string>
#include vector



/**
  * class system_order
  * 
  */

class system_order
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  system_order ();

  /**
   * Empty Destructor
   */
  virtual ~system_order ();

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

  void Menu_cards;
  void restarurent_list;
  void Customer_id_password;
  void payment_option;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Menu_cards
   * @param new_var the new value of Menu_cards
   */
  void setMenu_cards (void new_var)   {
      Menu_cards = new_var;
  }

  /**
   * Get the value of Menu_cards
   * @return the value of Menu_cards
   */
  void getMenu_cards ()   {
    return Menu_cards;
  }

  /**
   * Set the value of restarurent_list
   * @param new_var the new value of restarurent_list
   */
  void setRestarurent_list (void new_var)   {
      restarurent_list = new_var;
  }

  /**
   * Get the value of restarurent_list
   * @return the value of restarurent_list
   */
  void getRestarurent_list ()   {
    return restarurent_list;
  }

  /**
   * Set the value of Customer_id_password
   * @param new_var the new value of Customer_id_password
   */
  void setCustomer_id_password (void new_var)   {
      Customer_id_password = new_var;
  }

  /**
   * Get the value of Customer_id_password
   * @return the value of Customer_id_password
   */
  void getCustomer_id_password ()   {
    return Customer_id_password;
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

#endif // SYSTEM_ORDER_H
