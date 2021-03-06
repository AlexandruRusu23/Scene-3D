#ifndef CONE_H
#define CONE_H

#include "Model.h"
#include <time.h>
#include <stdarg.h>

using namespace BasicEngine::Rendering::Models;

class Cone : public Model
{
public:
  Cone();
  ~Cone();

  void Create();
  virtual void Draw(const glm::mat4& projection_matrix, const glm::mat4& view_matrix) override final;
  virtual void Update() override final;
  virtual void Move(int areaId, int directionId) override final;

  virtual void PrintDetails() override final;

private:
  glm::vec3 rotation, rotation_speed;
  glm::vec3 rotation_sin;
  glm::vec3 translate, translate_speed;
  glm::mat4 translate_matrix;
};

#endif
