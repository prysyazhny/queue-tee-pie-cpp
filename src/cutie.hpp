#pragma once

#include <string>

class Cutie
{
protected:
  std::string description;
  int cuteness_rating;

public:
  Cutie(std::string description, int cuteness_rating)
      : description(description), cuteness_rating(cuteness_rating) {}

  virtual ~Cutie() = default;

  virtual std::string get_description() = 0;
  virtual int get_cuteness_rating() = 0;
};

class Puppy : public Cutie
{
public:
  Puppy() : Cutie("A very cute puppy", 10) {}

  std::string get_description() override
  {
    return description;
  }

  int get_cuteness_rating() override
  {
    return cuteness_rating;
  }
};

class Kitty : public Cutie
{
public:
  Kitty() : Cutie("A fluffy kitty", 9) {}

  std::string get_description() override
  {
    return description;
  }

  int get_cuteness_rating() override
  {
    return cuteness_rating;
  }
};

class PygmyMarmoset : public Cutie
{
public:
  PygmyMarmoset() : Cutie("A tiny pygmy marmoset", 11) {}

  std::string get_description() override
  {
    return description;
  }

  int get_cuteness_rating() override
  {
    return cuteness_rating;
  }
};
