#ifndef BAYMAXAPP_H
#define BAYMAXAPP_H

#include "MooseApp.h"

class BaymaxApp;

template<>
InputParameters validParams<BaymaxApp>();

class BaymaxApp : public MooseApp
{
public:
  BaymaxApp(const std::string & name, InputParameters parameters);
  virtual ~BaymaxApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* BAYMAXAPP_H */
