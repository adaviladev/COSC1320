// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post

package homework52;

/**
 * 
 * @author Adrian Davila
 */
/**
 * Class for the Ogre Alien
 */
public class OgreAlien extends Alien
{
	public static final int OGRE_DAMAGE  = 6;
   	/**
	* Constructors
 	*/
	public OgreAlien()
	{
		super();
	}
	public OgreAlien(int health, String name)
	{
		super(health,name);
	}

	/**
	* getDamage returns the amount of damage this alien inflicts.
	*/
	public int getDamage()
	{
		return OGRE_DAMAGE;
	}
} // OgreAlien
