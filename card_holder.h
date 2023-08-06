
#ifndef CARD_HOLDER_H
#define CARD_HOLDER_H

#include <string>

/**
  * class card_holder
  * 
  */

class card_holder
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  card_holder ();

  /**
   * Empty Destructor
   */
  virtual ~card_holder ();

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
  void sign_bill ()
  {
  }


  /**
   */
  void give_card ()
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

  void items_purchased;
  void credit_card;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of items_purchased
   * @param new_var the new value of items_purchased
   */
  void setItems_purchased (void new_var)   {
      items_purchased = new_var;
  }

  /**
   * Get the value of items_purchased
   * @return the value of items_purchased
   */
  void getItems_purchased ()   {
    return items_purchased;
  }

  /**
   * Set the value of credit_card
   * @param new_var the new value of credit_card
   */
  void setCredit_card (void new_var)   {
      credit_card = new_var;
  }

  /**
   * Get the value of credit_card
   * @return the value of credit_card
   */
  void getCredit_card ()   {
    return credit_card;
  }
private:


  void initAttributes () ;

};

#endif // CARD_HOLDER_H
