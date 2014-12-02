// This class define an entity.
// An entity can be either an agent or an object.

#ifndef ENTITY_H
  #define ENTITY_H

  #include <boost/geometry.hpp>
  #include <vector>
  namespace bg = boost::geometry;


  class Entity
  {

  private:
    unsigned int id;						// each entity has a unic id
    std::string name;						// Entity might have a name
    bg::model::point<double, 3, bg::cs::cartesian> position;    // Entity position
    std::vector<double> orientation;                            // Entity orientation
    unsigned long time;						// time of data in microseconds

  public:
    std::vector<unsigned int> inArea;					// Entity might be in a specific area(s)

    // Constructor
    Entity(unsigned int entityId);

    // functions
    bool isInArea(unsigned int areaId);
    void removeInArea(unsigned int areaId);

    // accessors, mutators
    unsigned int getId();
    void setId(unsigned int entId);
    unsigned long getTime();
    void setTime(unsigned long entTime);
    std::string getName();
    void setName(std::string entityName);
    bg::model::point<double, 3, bg::cs::cartesian> getPosition();
    void setPosition(bg::model::point<double, 3, bg::cs::cartesian> point);
    std::vector<double> getOrientation();
    void setOrientation(std::vector<double> entityOrientation);
  };
#endif

