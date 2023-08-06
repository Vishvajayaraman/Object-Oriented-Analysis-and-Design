
#ifndef TRANCEIVER_H
#define TRANCEIVER_H

#include <string>

/**
  * class Tranceiver
  * 
  */

class Tranceiver
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Tranceiver ();

  /**
   * Empty Destructor
   */
  virtual ~Tranceiver ();

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
  void receive_command ()
  {
  }


  /**
   */
  void send_alert ()
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

  void alert_msg;
  void command;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of alert_msg
   * @param new_var the new value of alert_msg
   */
  void setAlert_msg (void new_var)   {
      alert_msg = new_var;
  }

  /**
   * Get the value of alert_msg
   * @return the value of alert_msg
   */
  void getAlert_msg ()   {
    return alert_msg;
  }

  /**
   * Set the value of command
   * @param new_var the new value of command
   */
  void setCommand (void new_var)   {
      command = new_var;
  }

  /**
   * Get the value of command
   * @return the value of command
   */
  void getCommand ()   {
    return command;
  }
private:


  void initAttributes () ;

};

#endif // TRANCEIVER_H
