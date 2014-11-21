// This class define an entity.
// An entity can be either an agent or an object.


#include <Entity.h>
#include <algorithm>

// Constructor
Entity::Entity(int entityId) : id(entityId){
}

//functions
bool Entity::isInArea(int areaId){
  if( std::find(inArea.begin(), inArea.end(), areaId) != inArea.end() )
    return true;
  else
    return false;
}

void Entity::removeInArea(int areaId){
  std::vector<int>::iterator i = std::find(inArea.begin(), inArea.end(), areaId);
  if (i != inArea.end())
    inArea.erase(i);
}

// accessors, mutators
int Entity::getId(){
  return id;
}

void Entity::setId(int entId){
  id = entId;
}

unsigned long Entity::getTime(){
  return time;
}

void Entity::setTime(unsigned long entTime){
  time = entTime;
}
    
std::string Entity::getName(){
  return name;
}

void Entity::setName(std::string entityName){
  name = entityName;
}

bg::model::point<double, 3, bg::cs::cartesian> Entity::getPosition(){
  return position;
}

void Entity::setPosition(bg::model::point<double, 3, bg::cs::cartesian> point){
  position = point;
}

std::vector<double> Entity::getOrientation(){
  return orientation;
}

void Entity::setOrientation(std::vector<double> entityOrientation){
  orientation = entityOrientation;
}
