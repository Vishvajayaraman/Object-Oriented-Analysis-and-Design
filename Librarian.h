
#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <string>
#include vector



/**
  * class Librarian
  * 
  */

class Librarian
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Librarian ();

  /**
   * Empty Destructor
   */
  virtual ~Librarian ();

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
  void search_Book ()
  {
  }


  /**
   */
  void VerifyMember ()
  {
  }


  /**
   */
  void issueBook ()
  {
  }


  /**
   */
  void calculate_fine ()
  {
  }


  /**
   */
  void createBill ()
  {
  }


  /**
   */
  void return_book ()
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

  void Name;
  void password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (void new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  void getName ()   {
    return Name;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (void new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  void getPassword ()   {
    return password;
  }
private:


  void initAttributes () ;

};

#endif // LIBRARIAN_H
