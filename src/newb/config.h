#ifndef NL_CONFIG_H
#define NL_CONFIG_H

/* Color correction */
#define NL_TONEMAP_TYPE 4
#define NL_GAMMA 1.33
#define NL_EXPOSURE 1.3
#define NL_SATURATION 0.0
#define NL_TINT
#define NL_TINT_LOW  vec3(0.54748,0.54748,0.54748)
#define NL_TINT_HIGH vec3(0.77798,0.77798,0.77798)

/* Terrain lighting */
#define NL_SUN_INTENSITY 2.95
#define NL_TORCH_INTENSITY 1.0
#define NL_NIGHT_BRIGHTNESS 0.1
#define NL_CAVE_BRIGHTNESS 0.1
#define NL_SHADOW_INTENSITY 0.7
#define NL_BLINKING_TORCH
//#define NL_CLOUD_SHADOW

/* Sun/moon light color on terrain */
#define NL_MORNING_SUN_COL vec3(0.519932,0.519932,0.519932)
#define NL_NOON_SUN_COL    vec3(0.77074,0.77074,0.77074)
#define NL_NIGHT_SUN_COL   vec3(0.623288,0.623288,0.623288)

/* Ambient light on terrain */
#define NL_NETHER_AMBIENT vec3(2.327436,2.327436,2.327436)
#define NL_END_AMBIENT    vec3(1.521186,1.521186,1.521186)

/* Torch colors */
#define NL_OVERWORLD_TORCH_COL  vec3(0.609872,0.609872,0.609872)
#define NL_UNDERWATER_TORCH_COL vec3(0.609872,0.609872,0.609872)
#define NL_NETHER_TORCH_COL     vec3(0.609872,0.609872,0.609872)
#define NL_END_TORCH_COL        vec3(0.609872,0.609872,0.609872)

/* Fog */
#define NL_FOG 1.0
#define NL_MIST_DENSITY 0.18
#define NL_RAIN_MIST_OPACITY 0.12
#define NL_CLOUDY_FOG 0.1

/* Sky colors */
#define NL_DAY_ZENITH_COL    vec3(0.42193,0.42193,0.42193)
#define NL_DAY_HORIZON_COL   vec3(0.775816,0.775816,0.775816)
#define NL_NIGHT_ZENITH_COL  vec3(0.0218752,0.0218752,0.0218752)
#define NL_NIGHT_HORIZON_COL vec3(0.048896,0.048896,0.048896)
#define NL_RAIN_ZENITH_COL   vec3(0.90054,0.90054,0.90054)
#define NL_RAIN_HORIZON_COL  vec3(1.0,1.0,1.0)
#define NL_END_ZENITH_COL    vec3(0.0319834,0.0319834,0.0319834)
#define NL_END_HORIZON_COL   vec3(0.274968,0.274968,0.274968)
#define NL_DAWN_ZENITH_COL   vec3(0.0400746,0.0400746,0.0400746)
#define NL_DAWN_HORIZON_COL  vec3(0.4566,0.4566,0.4566)
#define NL_DAWN_EDGE_COL     vec3(0.58056,0.58056,0.58056)

/* Rainbow */
#define NL_RAINBOW
#define NL_RAINBOW_CLEAR 0.0
#define NL_RAINBOW_RAIN 1.0

/* Ore glow intensity */
#define NL_GLOW_TEX 2.3
#define NL_GLOW_SHIMMER 0.8
#define NL_GLOW_SHIMMER_SPEED 0.9
//#define NL_GLOW_LEAK 0.6

/* Waving */
#define NL_PLANTS_WAVE 0.05
#define NL_LANTERN_WAVE 0.16
#define NL_WAVE_SPEED 2.8
//#define NL_EXTRA_PLANTS_WAVE
#define NL_WAVE_RANGE 13.0

/* Water */
#define NL_WATER_TRANSPARENCY 0.9
#define NL_WATER_BUMP 0.09
#define NL_WATER_WAVE_SPEED  0.8
#define NL_WATER_TEX_OPACITY 0.3
#define NL_WATER_WAVE
#define NL_WATER_CLOUD_REFLECTION
//#define NL_WATER_REFL_MASK
#define NL_WATER_TINT vec3(0.772972,0.772972,0.772972)

/* Underwater */
#define NL_UNDERWATER_BRIGHTNESS 0.8
#define NL_CAUSTIC_INTENSITY 1.9
#define NL_UNDERWATER_WAVE 0.1
#define NL_UNDERWATER_STREAKS 1.0
#define NL_UNDERWATER_TINT vec3(0.96454,0.96454,0.96454)

/* Cloud type */
#define NL_CLOUD_TYPE 1

/* Vanilla cloud settings */
#define NL_CLOUD0_THICKNESS 2.1
#define NL_CLOUD0_RAIN_THICKNESS 4.0
#define NL_CLOUD0_OPACITY 0.9
#define NL_CLOUD0_MULTILAYER

/* Soft cloud settings */
#define NL_CLOUD1_SCALE vec2(0.016, 0.022)
#define NL_CLOUD1_DEPTH 1.3
#define NL_CLOUD1_SPEED 0.04
#define NL_CLOUD1_DENSITY 0.54
#define NL_CLOUD1_OPACITY 0.9

/* Rounded cloud settings */
#define NL_CLOUD2_THICKNESS 2.1
#define NL_CLOUD2_RAIN_THICKNESS 2.5
#define NL_CLOUD2_STEPS 5
#define NL_CLOUD2_SCALE vec2(0.033, 0.033)
#define NL_CLOUD2_SHAPE vec2(0.5, 0.4)
#define NL_CLOUD2_DENSITY 25.0
#define NL_CLOUD2_VELOCITY 0.8
//#define NL_CLOUD2_LAYER2
#define NL_CLOUD2_LAYER2_OFFSET 143.0
#define NL_CLOUD2_LAYER2_THICKNESS 2.5
#define NL_CLOUD2_LAYER2_RAIN_THICKNESS 3.0
#define NL_CLOUD2_LAYER2_STEPS 3
#define NL_CLOUD2_LAYER2_SCALE vec2(0.03, 0.03)
#define NL_CLOUD2_LAYER2_SHAPE vec2(0.5, 0.4)
#define NL_CLOUD2_LAYER2_DENSITY 25.0
#define NL_CLOUD2_LAYER2_VELOCITY 0.8

/* Realistic cloud settings */
#define NL_CLOUD3_SCALE vec2(0.03, 0.03)
#define NL_CLOUD3_SPEED 0.005
#define NL_CLOUD3_SHADOW 0.9
#define NL_CLOUD3_SHADOW_OFFSET 0.3

/* Aurora settings */
#define NL_AURORA 1.2
#define NL_AURORA_VELOCITY 0.03
#define NL_AURORA_SCALE 0.04
#define NL_AURORA_WIDTH 0.18
#define NL_AURORA_COL1 vec3(0.71526,0.71526,0.71526)
#define NL_AURORA_COL2 vec3(0.0722,0.0722,0.0722)

/* Shooting star */
#define NL_SHOOTING_STAR 1.0
#define NL_SHOOTING_STAR_PERIOD 6.0
#define NL_SHOOTING_STAR_DELAY 64.0

/* Galaxy */
//#define NL_GALAXY_STARS 2.0
#define NL_GALAXY_VIBRANCE 0.7
#define NL_GALAXY_SPEED 0.03
#define NL_GALAXY_DAY_VISIBILITY 0.0

/* Chunk loading slide in animation */
//#define NL_CHUNK_LOAD_ANIM 100.0

/* Sun/Moon */
//#define NL_SUNMOON_ANGLE 45.0
#define NL_SUNMOON_SIZE 1.0
#define NL_SUNMOON_RAIN_VISIBILITY 0.5

/* Fake godrays during sunrise/sunset */
#define NL_GODRAY 0.3

/* Sky reflection */
//#define NL_GROUND_REFL 0.4
#define NL_GROUND_RAIN_WETNESS 1.0
#define NL_GROUND_RAIN_PUDDLES 0.7
//#define NL_GROUND_AURORA_REFL

/* Entity */
#define NL_ENTITY_BRIGHTNESS     0.65
#define NL_ENTITY_EDGE_HIGHLIGHT 0.41

/* Weather particles */
#define NL_WEATHER_SPECK 0.6
#define NL_WEATHER_RAIN_SLANT 4.0
#define NL_WEATHER_PARTICLE_SIZE 1.0

/* Lava effects */
#define NL_LAVA_NOISE
//#define NL_LAVA_NOISE_BUMP 0.2
#define NL_LAVA_NOISE_SPEED 0.02

/* Subpack config logic remains unchanged */
#ifdef LITE
  #define NO_WAVE
  #undef NL_GLOW_SHIMMER
  #undef NL_LAVA_NOISE
  #undef NL_WEATHER_SPECK
  #undef NL_SHOOTING_STAR
  #undef NL_WATER_CLOUD_REFLECTION
  #undef NL_UNDERWATER_STREAKS
  #undef NL_RAIN_MIST_OPACITY
  #undef NL_CLOUDY_FOG
  #undef NL_ENTITY_EDGE_HIGHLIGHT
#endif

#ifdef NO_WAVE_NO_FOG
  #define NO_WAVE
  #define NO_FOG
#endif

#ifdef NO_FOG
  #undef NL_FOG
#endif

#ifdef NO_WAVE
  #undef NL_PLANTS_WAVE
  #undef NL_LANTERN_WAVE
  #undef NL_UNDERWATER_WAVE
  #undef NL_WATER_WAVE
  #undef NL_RAIN_MIST_OPACITY
#endif

#ifdef CHUNK_ANIM
  #define NL_CHUNK_LOAD_ANIM 100.0
#endif

#ifdef ROUNDED_CLOUDS
  #undef NL_CLOUD_TYPE
  #define NL_CLOUD_TYPE 2
#endif

#ifdef BOX_CLOUDS
  #undef NL_CLOUD_TYPE
  #define NL_CLOUD_TYPE 0
#endif

#endif
