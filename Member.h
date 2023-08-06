
#ifndef MEMBER_H
#define MEMBER_H

#include <string>

/**
  * class Member
  * 
  */

class Member
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Member ();

  /**
   * Empty Destructor
   */
  virtual ~Member ();

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
  void presenting_the_paper ()
  {
  }


  /**
   */
  void winning_the_prize ()
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

  void name;
  void id;
  void proof;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
  }

  /**
   * Set the value of proof
   * @param new_var the new value of proof
   */
  void setProof (void new_var)   {
      proof = new_var;
  }

  /**
   * Get the value of proof
   * @return the value of proof
   */
  void getProof ()   {
    return proof;
  }
private:


  void initAttributes () ;

};

#endif // MEMBER_H
