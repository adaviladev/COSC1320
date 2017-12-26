// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post

package homework52;

/**
 * 
 * @author Adrian Davila
 */
public abstract class Alien {
	public static final int DEFAULT_DAMAGE = 0;
	private int health; // 0=dead, 100=full strength
	private String name;

   	/**
	* Default constructor;  Initialize name and health.
 	*/
	public Alien()
	{
		health = 100;
		name = "";
	}

  	 /**
	* Default constructor;  Initialize variables to input parameters.
	* @param health Initial health
	* @param name   Initial name
 	*/
	public Alien(int health, String name)
	{
		this.health = health;
		this.name = name;
	}

// ======================
// Various accessor and mutator methods
// ======================
    public int getHealth()
    {
        return health;
    }

    public void setHealth(int health)
    {
        this.health = health;
    }

    public String getName()
    {
        return name;
    }

    public void setName(String name)
    {
        this.name = name;
    }

    /**
    * getDamage returns the amount of damage this alien inflicts.
    */
    public abstract int getDamage();
} // Alien
