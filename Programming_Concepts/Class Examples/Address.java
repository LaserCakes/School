//************************************************
//  Address.java
//
//  Represents a person's address.
//
//************************************************
public class Address
{
    // Instance variables
    private String last_name;
    private String first_name;
    private String street_address_1;    // Street number
    private String street_address_2;    // Apt number
    private String city;
    private String state;
    private String zip_code;
    private boolean isValid;
    
    //-----------------------------------------------------
    // Constructor - sets up an Address object from one line
    // of a Comma Separated Values file.
    //-----------------------------------------------------
    public Address(String csv_str)
    {
        String[] address_info = csv_str.split(",");

        if (address_info.length == 7)
        {
            this.last_name = address_info[0];
            this.first_name = address_info[1];
            this.street_address_1 = address_info[2];
            this.street_address_2 = address_info[3];
            this.city = address_info[4];
            this.state = address_info[5];
            this.zip_code = address_info[6];
            isValid = true;
        }
        else
        {
            isValid = false;
        }
    }

    //------------------------------------------------------
    // Returns a single string with all address components
    // in a printable format.
    //------------------------------------------------------
    public String toString()
    {
        if (this.isValid)
        {
            return        
                this.first_name + " " +
                this.last_name + "\n" +
                this.street_address_1 + " " +
                this.street_address_2  + "\n" +
                this.city + ", " +
                this.state + " " +
                this.zip_code + "\n";
        }
        else
        {
            return "Invalid address\n";
        }
    }

    //------------------------------------------------------
    // Returns a single string with all address components
    // suitable for input by a Java program or by Excel.
    //------------------------------------------------------
    public String Serialize()
    {
        if (this.isValid)
        {
            return        
                this.last_name + "," +
                this.first_name + "," +
                this.street_address_1 + "," +
                this.street_address_2  + "," +
                this.city + "," +
                this.state + "," +
                this.zip_code + "\n";
        }
        else
        {
            return "\n";
        }
    }
    
    //------------------------------------------------------
    // Returns a boolean says whether or not the address
    // is valid.
    //------------------------------------------------------
    public boolean isValid()
    {
       return this.isValid; 
    }
          
}


    