package homework52;

// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post

/**
 * 
 * @author Adrian Davila
 */
/**
* Class for the Marshmallow Alien
*/
public class MarshmallowAlien extends Alien
{
	public static final int MARSHMALLOW_DAMAGE  = 1;
   	/**
	* Constructors
 	*/
	public MarshmallowAlien()
	{
		super();
	}

	public MarshmallowAlien(int health, String name)
	{
		super(health,name);
	}

	/**
	* getDamage returns the amount of damage this alien inflicts.
	*/
	public int getDamage()
	{
		return MARSHMALLOW_DAMAGE;
	}
} // MarshmallowAlien
