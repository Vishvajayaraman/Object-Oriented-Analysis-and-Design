
#ifndef ROLE_CLASS_H
#define ROLE_CLASS_H

#include <string>

/**
  * class Role_class
  * 
  */

class Role_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Role_class ();

  /**
   * Empty Destructor
   */
  virtual ~Role_class ();

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
  void add_role ()
  {
  }


  /**
   */
  void edit_role ()
  {
  }


  /**
   */
  void delete_role ()
  {
  }


  /**
   */
  void search_role ()
  {
  }


  /**
   */
  void assign_role ()
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

  void role_id;
  void role_title;
  void role_description;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of role_id
   * @param new_var the new value of role_id
   */
  void setRole_id (void new_var)   {
      role_id = new_var;
  }

  /**
   * Get the value of role_id
   * @return the value of role_id
   */
  void getRole_id ()   {
    return role_id;
  }

  /**
   * Set the value of role_title
   * @param new_var the new value of role_title
   */
  void setRole_title (void new_var)   {
      role_title = new_var;
  }

  /**
   * Get the value of role_title
   * @return the value of role_title
   */
  void getRole_title ()   {
    return role_title;
  }

  /**
   * Set the value of role_description
   * @param new_var the new value of role_description
   */
  void setRole_description (void new_var)   {
      role_description = new_var;
  }

  /**
   * Get the value of role_description
   * @return the value of role_description
   */
  void getRole_description ()   {
    return role_description;
  }
private:


  void initAttributes () ;

};

#endif // ROLE_CLASS_H
