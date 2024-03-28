#pragma once

namespace Particle
{
    struct ParticleSystemConfig 
    {
        sf::String particles_texture_path;

        float particles_sprite_width = 0.0f;
        float particles_sprite_height = 0.0f;

        float tile_width = 0.0f;
        float tile_height = 0.0f;

        int number_of_animation_frames = 0;
        float frame_duration = 0.0f;

        ParticleSystemConfig() {};

        ParticleSystemConfig(sf::String texture_path, float sprite_width, float sprite_height, float tile_width, float tile_height, int frames, float duration) :
            particles_texture_path(texture_path),
            particles_sprite_width(sprite_width),
            particles_sprite_height(sprite_height),
            tile_width(tile_width),
            tile_height(tile_height),
            number_of_animation_frames(frames),
            frame_duration(duration) {}  
    };
}