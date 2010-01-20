// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/GLBeginEndAdapter>
#include <osg/Matrix>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osgParticle/Interpolator>
#include <osgParticle/Particle>
#include <osgParticle/ParticleSystem>
#include <osgParticle/range>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgParticle::Particle::Shape)
	I_DeclaringFile("osgParticle/Particle");
	I_EnumLabel(osgParticle::Particle::POINT);
	I_EnumLabel(osgParticle::Particle::QUAD);
	I_EnumLabel(osgParticle::Particle::QUAD_TRIANGLESTRIP);
	I_EnumLabel(osgParticle::Particle::HEXAGON);
	I_EnumLabel(osgParticle::Particle::LINE);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgParticle::Particle)
	I_DeclaringFile("osgParticle/Particle");
	I_Constructor0(____Particle,
	               "",
	               "");
	I_Method0(osgParticle::Particle::Shape, getShape,
	          Properties::NON_VIRTUAL,
	          __Shape__getShape,
	          "Get the shape of the particle. ",
	          "");
	I_Method1(void, setShape, IN, osgParticle::Particle::Shape, s,
	          Properties::NON_VIRTUAL,
	          __void__setShape__Shape,
	          "Set the shape of the particle. ",
	          "");
	I_Method0(bool, isAlive,
	          Properties::NON_VIRTUAL,
	          __bool__isAlive,
	          "Get whether the particle is still alive. ",
	          "");
	I_Method0(double, getLifeTime,
	          Properties::NON_VIRTUAL,
	          __double__getLifeTime,
	          "Get the life time of the particle (in seconds). ",
	          "");
	I_Method0(double, getAge,
	          Properties::NON_VIRTUAL,
	          __double__getAge,
	          "Get the age of the particle (in seconds). ",
	          "");
	I_Method0(const osgParticle::rangef &, getSizeRange,
	          Properties::NON_VIRTUAL,
	          __C5_rangef_R1__getSizeRange,
	          "Get the minimum and maximum values for polygon size. ",
	          "");
	I_Method0(const osgParticle::rangef &, getAlphaRange,
	          Properties::NON_VIRTUAL,
	          __C5_rangef_R1__getAlphaRange,
	          "Get the minimum and maximum values for alpha. ",
	          "");
	I_Method0(const osgParticle::rangev4 &, getColorRange,
	          Properties::NON_VIRTUAL,
	          __C5_rangev4_R1__getColorRange,
	          "Get the minimum and maximum values for color. ",
	          "");
	I_Method0(const osgParticle::Interpolator *, getSizeInterpolator,
	          Properties::NON_VIRTUAL,
	          __C5_Interpolator_P1__getSizeInterpolator,
	          "Get the interpolator for computing the size of polygons. ",
	          "");
	I_Method0(const osgParticle::Interpolator *, getAlphaInterpolator,
	          Properties::NON_VIRTUAL,
	          __C5_Interpolator_P1__getAlphaInterpolator,
	          "Get the interpolator for computing alpha values. ",
	          "");
	I_Method0(const osgParticle::Interpolator *, getColorInterpolator,
	          Properties::NON_VIRTUAL,
	          __C5_Interpolator_P1__getColorInterpolator,
	          "Get the interpolator for computing color values. ",
	          "");
	I_Method0(float, getRadius,
	          Properties::NON_VIRTUAL,
	          __float__getRadius,
	          "Get the physical radius of the particle. ",
	          "For built-in operators to work correctly, lengths must be expressed in meters. ");
	I_Method0(float, getMass,
	          Properties::NON_VIRTUAL,
	          __float__getMass,
	          "Get the mass of the particle. ",
	          "For built-in operators to work correctly, remember that the mass is expressed in kg. ");
	I_Method0(float, getMassInv,
	          Properties::NON_VIRTUAL,
	          __float__getMassInv,
	          "Get 1 / getMass(). ",
	          "");
	I_Method0(const osg::Vec3 &, getPosition,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getPosition,
	          "Get the position vector. ",
	          "");
	I_Method0(const osg::Vec3 &, getVelocity,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getVelocity,
	          "Get the velocity vector. ",
	          "For built-in operators to work correctly, remember that velocity components are expressed in meters per second. ");
	I_Method0(const osg::Vec3 &, getPreviousPosition,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getPreviousPosition,
	          "Get the previous position (the position before last update). ",
	          "");
	I_Method0(const osg::Vec3 &, getAngle,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getAngle,
	          "Get the angle vector. ",
	          "");
	I_Method0(const osg::Vec3 &, getAngularVelocity,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getAngularVelocity,
	          "Get the rotational velocity vector. ",
	          "");
	I_Method0(const osg::Vec3 &, getPreviousAngle,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getPreviousAngle,
	          "Get the previous angle vector. ",
	          "");
	I_Method0(const osg::Vec4 &, getCurrentColor,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec4_R1__getCurrentColor,
	          "Get the current color. ",
	          "");
	I_Method0(float, getCurrentAlpha,
	          Properties::NON_VIRTUAL,
	          __float__getCurrentAlpha,
	          "Get the current alpha. ",
	          "");
	I_Method0(float, getSTexCoord,
	          Properties::NON_VIRTUAL,
	          __float__getSTexCoord,
	          "Get the s texture coordinate of the bottom left of the particle. ",
	          "");
	I_Method0(float, getTTexCoord,
	          Properties::NON_VIRTUAL,
	          __float__getTTexCoord,
	          "Get the t texture coordinate of the bottom left of the particle. ",
	          "");
	I_Method0(int, getTileS,
	          Properties::NON_VIRTUAL,
	          __int__getTileS,
	          "Get width of texture tile. ",
	          "");
	I_Method0(int, getTileT,
	          Properties::NON_VIRTUAL,
	          __int__getTileT,
	          "Get height of texture tile. ",
	          "");
	I_Method0(int, getNumTiles,
	          Properties::NON_VIRTUAL,
	          __int__getNumTiles,
	          "Get number of texture tiles. ",
	          "");
	I_Method0(void, kill,
	          Properties::NON_VIRTUAL,
	          __void__kill,
	          "Kill the particle on next update NOTE: after calling this function, the isAlive() method will still return true until the particle is updated again. ",
	          "");
	I_Method1(void, setLifeTime, IN, double, t,
	          Properties::NON_VIRTUAL,
	          __void__setLifeTime__double,
	          "Set the life time of the particle. ",
	          "");
	I_Method1(void, setSizeRange, IN, const osgParticle::rangef &, r,
	          Properties::NON_VIRTUAL,
	          __void__setSizeRange__C5_rangef_R1,
	          "Set the minimum and maximum values for polygon size. ",
	          "");
	I_Method1(void, setAlphaRange, IN, const osgParticle::rangef &, r,
	          Properties::NON_VIRTUAL,
	          __void__setAlphaRange__C5_rangef_R1,
	          "Set the minimum and maximum values for alpha. ",
	          "");
	I_Method1(void, setColorRange, IN, const osgParticle::rangev4 &, r,
	          Properties::NON_VIRTUAL,
	          __void__setColorRange__C5_rangev4_R1,
	          "Set the minimum and maximum values for color. ",
	          "");
	I_Method1(void, setSizeInterpolator, IN, osgParticle::Interpolator *, ri,
	          Properties::NON_VIRTUAL,
	          __void__setSizeInterpolator__Interpolator_P1,
	          "Set the interpolator for computing size values. ",
	          "");
	I_Method1(void, setAlphaInterpolator, IN, osgParticle::Interpolator *, ai,
	          Properties::NON_VIRTUAL,
	          __void__setAlphaInterpolator__Interpolator_P1,
	          "Set the interpolator for computing alpha values. ",
	          "");
	I_Method1(void, setColorInterpolator, IN, osgParticle::Interpolator *, ci,
	          Properties::NON_VIRTUAL,
	          __void__setColorInterpolator__Interpolator_P1,
	          "Set the interpolator for computing color values. ",
	          "");
	I_Method1(void, setRadius, IN, float, r,
	          Properties::NON_VIRTUAL,
	          __void__setRadius__float,
	          "Set the physical radius of the particle. ",
	          "For built-in operators to work correctly, lengths must be expressed in meters. ");
	I_Method1(void, setMass, IN, float, m,
	          Properties::NON_VIRTUAL,
	          __void__setMass__float,
	          "Set the mass of the particle. ",
	          "For built-in operators to work correctly, remember that the mass is expressed in kg. ");
	I_Method1(void, setPosition, IN, const osg::Vec3 &, p,
	          Properties::NON_VIRTUAL,
	          __void__setPosition__C5_osg_Vec3_R1,
	          "Set the position vector. ",
	          "");
	I_Method1(void, setVelocity, IN, const osg::Vec3 &, v,
	          Properties::NON_VIRTUAL,
	          __void__setVelocity__C5_osg_Vec3_R1,
	          "Set the velocity vector. ",
	          "For built-in operators to work correctly, remember that velocity components are expressed in meters per second. ");
	I_Method1(void, addVelocity, IN, const osg::Vec3 &, dv,
	          Properties::NON_VIRTUAL,
	          __void__addVelocity__C5_osg_Vec3_R1,
	          "Add a vector to the velocity vector. ",
	          "");
	I_Method1(void, transformPositionVelocity, IN, const osg::Matrix &, xform,
	          Properties::NON_VIRTUAL,
	          __void__transformPositionVelocity__C5_osg_Matrix_R1,
	          "Transform position and velocity vectors by a matrix. ",
	          "");
	I_Method3(void, transformPositionVelocity, IN, const osg::Matrix &, xform1, IN, const osg::Matrix &, xform2, IN, float, r,
	          Properties::NON_VIRTUAL,
	          __void__transformPositionVelocity__C5_osg_Matrix_R1__C5_osg_Matrix_R1__float,
	          "Transform position and velocity vectors by a combination of two matrices. ",
	          "");
	I_Method1(void, setAngle, IN, const osg::Vec3 &, a,
	          Properties::NON_VIRTUAL,
	          __void__setAngle__C5_osg_Vec3_R1,
	          "Set the angle vector. ",
	          "");
	I_Method1(void, setAngularVelocity, IN, const osg::Vec3 &, v,
	          Properties::NON_VIRTUAL,
	          __void__setAngularVelocity__C5_osg_Vec3_R1,
	          "Set the angular velocity vector. ",
	          "Components x, y and z are angles of rotation around the respective axis (in radians). ");
	I_Method1(void, addAngularVelocity, IN, const osg::Vec3 &, dv,
	          Properties::NON_VIRTUAL,
	          __void__addAngularVelocity__C5_osg_Vec3_R1,
	          "Add a vector to the angular velocity vector. ",
	          "");
	I_Method1(void, transformAngleVelocity, IN, const osg::Matrix &, xform,
	          Properties::NON_VIRTUAL,
	          __void__transformAngleVelocity__C5_osg_Matrix_R1,
	          "Transform angle and angularVelocity vectors by a matrix. ",
	          "");
	I_Method1(bool, update, IN, double, dt,
	          Properties::NON_VIRTUAL,
	          __bool__update__double,
	          "Update the particle (don't call this method manually). ",
	          "This method is called automatically by ParticleSystem::update(); it updates the graphical properties of the particle for the current time, checks whether the particle is still alive, and then updates its position by computing P = P + V * dt (where P is the position and V is the velocity). ");
	I_Method1(void, beginRender, IN, osg::GLBeginEndAdapter *, gl,
	          Properties::NON_VIRTUAL,
	          __void__beginRender__osg_GLBeginEndAdapter_P1,
	          "Perform some pre-rendering tasks. Called automatically by particle systems. ",
	          "");
	I_MethodWithDefaults5(void, render, IN, osg::GLBeginEndAdapter *, gl, , IN, const osg::Vec3 &, xpos, , IN, const osg::Vec3 &, px, , IN, const osg::Vec3 &, py, , IN, float, scale, 1.0f,
	                      Properties::NON_VIRTUAL,
	                      __void__render__osg_GLBeginEndAdapter_P1__C5_osg_Vec3_R1__C5_osg_Vec3_R1__C5_osg_Vec3_R1__float,
	                      "Render the particle. Called automatically by particle systems. ",
	                      "");
	I_Method1(void, endRender, IN, osg::GLBeginEndAdapter *, gl,
	          Properties::NON_VIRTUAL,
	          __void__endRender__osg_GLBeginEndAdapter_P1,
	          "Perform some post-rendering tasks. Called automatically by particle systems. ",
	          "");
	I_Method0(float, getCurrentSize,
	          Properties::NON_VIRTUAL,
	          __float__getCurrentSize,
	          "Get the current (interpolated) polygon size. Valid only after the first call to update(). ",
	          "");
	I_Method4(void, setTextureTileRange, IN, int, sTile, IN, int, tTile, IN, int, startTile, IN, int, endTile,
	          Properties::NON_VIRTUAL,
	          __void__setTextureTileRange__int__int__int__int,
	          "Specify how the particle texture is tiled. ",
	          "All tiles in the given range are sequentially displayed during the lifetime of the particle. When no range is given, all tiles are displayed during the lifetime. ");
	I_MethodWithDefaults3(void, setTextureTile, IN, int, sTile, , IN, int, tTile, , IN, int, end, -1,
	                      Properties::NON_VIRTUAL,
	                      __void__setTextureTile__int__int__int,
	                      "Same as above, range starts at 0 and ends at end. ",
	                      "");
	I_Method1(void, setPreviousParticle, IN, int, previous,
	          Properties::NON_VIRTUAL,
	          __void__setPreviousParticle__int,
	          "Set the previous particle. ",
	          "");
	I_Method0(int, getPreviousParticle,
	          Properties::NON_VIRTUAL,
	          __int__getPreviousParticle,
	          "Get the previous particle. ",
	          "");
	I_Method1(void, setNextParticle, IN, int, next,
	          Properties::NON_VIRTUAL,
	          __void__setNextParticle__int,
	          "Set the next particle. ",
	          "");
	I_Method0(int, getNextParticle,
	          Properties::NON_VIRTUAL,
	          __int__getNextParticle,
	          "Get the const next particle. ",
	          "");
	I_Method1(void, setUpTexCoordsAsPartOfConnectedParticleSystem, IN, osgParticle::ParticleSystem *, ps,
	          Properties::NON_VIRTUAL,
	          __void__setUpTexCoordsAsPartOfConnectedParticleSystem__ParticleSystem_P1,
	          "Method for initializing a particles texture coords as part of a connected particle system. ",
	          "");
	I_SimpleProperty(double, Age, 
	                 __double__getAge, 
	                 0);
	I_SimpleProperty(osgParticle::Interpolator *, AlphaInterpolator, 
	                 0, 
	                 __void__setAlphaInterpolator__Interpolator_P1);
	I_SimpleProperty(const osgParticle::rangef &, AlphaRange, 
	                 __C5_rangef_R1__getAlphaRange, 
	                 __void__setAlphaRange__C5_rangef_R1);
	I_SimpleProperty(const osg::Vec3 &, Angle, 
	                 __C5_osg_Vec3_R1__getAngle, 
	                 __void__setAngle__C5_osg_Vec3_R1);
	I_SimpleProperty(const osg::Vec3 &, AngularVelocity, 
	                 __C5_osg_Vec3_R1__getAngularVelocity, 
	                 __void__setAngularVelocity__C5_osg_Vec3_R1);
	I_SimpleProperty(osgParticle::Interpolator *, ColorInterpolator, 
	                 0, 
	                 __void__setColorInterpolator__Interpolator_P1);
	I_SimpleProperty(const osgParticle::rangev4 &, ColorRange, 
	                 __C5_rangev4_R1__getColorRange, 
	                 __void__setColorRange__C5_rangev4_R1);
	I_SimpleProperty(float, CurrentAlpha, 
	                 __float__getCurrentAlpha, 
	                 0);
	I_SimpleProperty(const osg::Vec4 &, CurrentColor, 
	                 __C5_osg_Vec4_R1__getCurrentColor, 
	                 0);
	I_SimpleProperty(float, CurrentSize, 
	                 __float__getCurrentSize, 
	                 0);
	I_SimpleProperty(double, LifeTime, 
	                 __double__getLifeTime, 
	                 __void__setLifeTime__double);
	I_SimpleProperty(float, Mass, 
	                 __float__getMass, 
	                 __void__setMass__float);
	I_SimpleProperty(float, MassInv, 
	                 __float__getMassInv, 
	                 0);
	I_SimpleProperty(int, NextParticle, 
	                 __int__getNextParticle, 
	                 __void__setNextParticle__int);
	I_SimpleProperty(const osg::Vec3 &, Position, 
	                 __C5_osg_Vec3_R1__getPosition, 
	                 __void__setPosition__C5_osg_Vec3_R1);
	I_SimpleProperty(const osg::Vec3 &, PreviousAngle, 
	                 __C5_osg_Vec3_R1__getPreviousAngle, 
	                 0);
	I_SimpleProperty(int, PreviousParticle, 
	                 __int__getPreviousParticle, 
	                 __void__setPreviousParticle__int);
	I_SimpleProperty(const osg::Vec3 &, PreviousPosition, 
	                 __C5_osg_Vec3_R1__getPreviousPosition, 
	                 0);
	I_SimpleProperty(float, Radius, 
	                 __float__getRadius, 
	                 __void__setRadius__float);
	I_SimpleProperty(float, STexCoord, 
	                 __float__getSTexCoord, 
	                 0);
	I_SimpleProperty(osgParticle::Particle::Shape, Shape, 
	                 __Shape__getShape, 
	                 __void__setShape__Shape);
	I_SimpleProperty(osgParticle::Interpolator *, SizeInterpolator, 
	                 0, 
	                 __void__setSizeInterpolator__Interpolator_P1);
	I_SimpleProperty(const osgParticle::rangef &, SizeRange, 
	                 __C5_rangef_R1__getSizeRange, 
	                 __void__setSizeRange__C5_rangef_R1);
	I_SimpleProperty(float, TTexCoord, 
	                 __float__getTTexCoord, 
	                 0);
	I_SimpleProperty(int, TileS, 
	                 __int__getTileS, 
	                 0);
	I_SimpleProperty(int, TileT, 
	                 __int__getTileT, 
	                 0);
	I_SimpleProperty(osgParticle::ParticleSystem *, UpTexCoordsAsPartOfConnectedParticleSystem, 
	                 0, 
	                 __void__setUpTexCoordsAsPartOfConnectedParticleSystem__ParticleSystem_P1);
	I_SimpleProperty(const osg::Vec3 &, Velocity, 
	                 __C5_osg_Vec3_R1__getVelocity, 
	                 __void__setVelocity__C5_osg_Vec3_R1);
END_REFLECTOR
