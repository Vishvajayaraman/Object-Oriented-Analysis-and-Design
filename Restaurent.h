
#ifndef RESTAURENT_H
#define RESTAURENT_H

#include <string>

/**
  * class Restaurent
  * 
  */

class Restaurent
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Restaurent ();

  /**
   * Empty Destructor
   */
  virtual ~Restaurent ();

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

  void check_the_order;
  void delivered_order;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of check_the_order
   * @param new_var the new value of check_the_order
   */
  void setCheck_the_order (void new_var)   {
      check_the_order = new_var;
  }

  /**
   * Get the value of check_the_order
   * @return the value of check_the_order
   */
  void getCheck_the_order ()   {
    return check_the_order;
  }

  /**
   * Set the value of delivered_order
   * @param new_var the new value of delivered_order
   */
  void setDelivered_order (void new_var)   {
      delivered_order = new_var;
  }

  /**
   * Get the value of delivered_order
   * @return the value of delivered_order
   */
  void getDelivered_order ()   {
    return delivered_order;
  }
private:


  void initAttributes () ;

};

#endif // RESTAURENT_H
