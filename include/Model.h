#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include <map>
#include "IGameObject.h"

namespace BasicEngine
{
  namespace Rendering
  {
    namespace Models
    {
      class Model : public IGameObject
      {
      public:
        Model();
        virtual ~Model();

        virtual void Draw() override;
        virtual void Draw(const glm::mat4& projection_matrix, const glm::mat4& view_matrix) override;
        virtual void Update() override;
        virtual void Move(int areaId, int directionId) override;

        virtual void PrintDetails() override;

        virtual void SetProgram(GLuint shaderName) override;
        virtual void Destroy() override;

        virtual GLuint GetVao() const override;
        virtual const std::vector<GLuint>& GetVbos() const override;

      protected:
        GLuint vao;
        GLuint program;
        std::vector<GLuint> vbos;
        std::map<std::string, GLuint> textures;
      };
    }
  }
}

#endif
