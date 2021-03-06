#ifndef BOX_H
#define BOX_H

class Box
{
public:
  // Constructors
  Box() = default;
  Box(double length, double width, double height);

  double volume() const;      // Function to calculate the volume of a box
  void printVolume() const;   // Function to print out the volume of a box (const!)

  // Functions to provide access to the values of member variables (all const!)
  double getLength() const { return m_length; }
  double getWidth()  const { return m_width; }
  double getHeight() const { return m_height; }

  // Functions to set member variable values (not const!)
  void setLength(double length) { if (length > 0) m_length = length; }
  void setWidth(double width)   { if (width > 0)  m_width  = width;  }
  void setHeight(double height) { if (height > 0) m_height = height; }

private:
  double m_length{1.0};
  double m_width {1.0};
  double m_height{1.0};
  mutable unsigned m_count{};   // Counts the amount of time printVolume() is called
};

#endif
