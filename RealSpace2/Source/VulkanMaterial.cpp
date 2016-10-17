#include "stdafx.h"
#include "VulkanMaterial.h"
#include "RS2.h"
#include "VulkanTextureLoader.h"

void DestroyVkMaterial(VulkanMaterial& Material)
{
	GetRS2Vulkan().TextureLoader->destroyTexture(Material.Texture);
}