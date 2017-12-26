// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post

package homework52;

/**
 * 
 * @author Adrian Davila
 */
/** The SnakeAlien class extends the Alien class
 * since it is a sub-type of Alien.  By doing this for
 * all the alien types, we can eliminate the "type" variable
 * in the original Alien class.
 */
public class SnakeAlien extends Alien
{
	public static final int SNAKE_DAMAGE  = 10;

  	 /**
	* Constructors
 	*/
	public SnakeAlien()
	{
		super();
	}

	public SnakeAlien(int health, String name)
	{
		super(health,name);
	}

	/**
	* getDamage returns the amount of damage this alien inflicts.
	*/
	public int getDamage()
	{
		return SNAKE_DAMAGE;
	}
} // SnakeAlien