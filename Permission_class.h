
#ifndef PERMISSION_CLASS_H
#define PERMISSION_CLASS_H

#include <string>
#include vector



/**
  * class Permission_class
  * 
  */

class Permission_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Permission_class ();

  /**
   * Empty Destructor
   */
  virtual ~Permission_class ();

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
  void addpermission ()
  {
  }


  /**
   */
  void edit_permission ()
  {
  }


  /**
   */
  void delete_permission ()
  {
  }


  /**
   */
  void search_permission ()
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

  void permission_id;
  void permission_role_id;
  void permission_title;
  void permission_module;
  void permission_description;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of permission_id
   * @param new_var the new value of permission_id
   */
  void setPermission_id (void new_var)   {
      permission_id = new_var;
  }

  /**
   * Get the value of permission_id
   * @return the value of permission_id
   */
  void getPermission_id ()   {
    return permission_id;
  }

  /**
   * Set the value of permission_role_id
   * @param new_var the new value of permission_role_id
   */
  void setPermission_role_id (void new_var)   {
      permission_role_id = new_var;
  }

  /**
   * Get the value of permission_role_id
   * @return the value of permission_role_id
   */
  void getPermission_role_id ()   {
    return permission_role_id;
  }

  /**
   * Set the value of permission_title
   * @param new_var the new value of permission_title
   */
  void setPermission_title (void new_var)   {
      permission_title = new_var;
  }

  /**
   * Get the value of permission_title
   * @return the value of permission_title
   */
  void getPermission_title ()   {
    return permission_title;
  }

  /**
   * Set the value of permission_module
   * @param new_var the new value of permission_module
   */
  void setPermission_module (void new_var)   {
      permission_module = new_var;
  }

  /**
   * Get the value of permission_module
   * @return the value of permission_module
   */
  void getPermission_module ()   {
    return permission_module;
  }

  /**
   * Set the value of permission_description
   * @param new_var the new value of permission_description
   */
  void setPermission_description (void new_var)   {
      permission_description = new_var;
  }

  /**
   * Get the value of permission_description
   * @return the value of permission_description
   */
  void getPermission_description ()   {
    return permission_description;
  }
private:


  void initAttributes () ;

};

#endif // PERMISSION_CLASS_H
