
#ifndef POLICY_H
#define POLICY_H

#include <string>
#include vector



/**
  * class Policy
  * 
  */

class Policy
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Policy ();

  /**
   * Empty Destructor
   */
  virtual ~Policy ();

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
  void Add_new_policy ()
  {
  }


  /**
   */
  void Delete_policy ()
  {
  }


  /**
   */
  void updae_policy_details ()
  {
  }


  /**
   */
  void year_of_pub ()
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

  void policy_id;
  void policy_name;
  void policy_admin;
  void year_of_pub;
  void price_;
  void status;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of policy_id
   * @param new_var the new value of policy_id
   */
  void setPolicy_id (void new_var)   {
      policy_id = new_var;
  }

  /**
   * Get the value of policy_id
   * @return the value of policy_id
   */
  void getPolicy_id ()   {
    return policy_id;
  }

  /**
   * Set the value of policy_name
   * @param new_var the new value of policy_name
   */
  void setPolicy_name (void new_var)   {
      policy_name = new_var;
  }

  /**
   * Get the value of policy_name
   * @return the value of policy_name
   */
  void getPolicy_name ()   {
    return policy_name;
  }

  /**
   * Set the value of policy_admin
   * @param new_var the new value of policy_admin
   */
  void setPolicy_admin (void new_var)   {
      policy_admin = new_var;
  }

  /**
   * Get the value of policy_admin
   * @return the value of policy_admin
   */
  void getPolicy_admin ()   {
    return policy_admin;
  }

  /**
   * Set the value of year_of_pub
   * @param new_var the new value of year_of_pub
   */
  void setYear_of_pub (void new_var)   {
      year_of_pub = new_var;
  }

  /**
   * Get the value of year_of_pub
   * @return the value of year_of_pub
   */
  void getYear_of_pub ()   {
    return year_of_pub;
  }

  /**
   * Set the value of price_
   * @param new_var the new value of price_
   */
  void setPrice_ (void new_var)   {
      price_ = new_var;
  }

  /**
   * Get the value of price_
   * @return the value of price_
   */
  void getPrice_ ()   {
    return price_;
  }

  /**
   * Set the value of status
   * @param new_var the new value of status
   */
  void setStatus (void new_var)   {
      status = new_var;
  }

  /**
   * Get the value of status
   * @return the value of status
   */
  void getStatus ()   {
    return status;
  }
private:


  void initAttributes () ;

};

#endif // POLICY_H
