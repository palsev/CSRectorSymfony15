<?php

namespace Rector\Symfony\Tests\Rector\Closure\ServiceSetStringNameToClassNameRector\Fixture;

use Rector\Symfony\Tests\Rector\Closure\ServiceSetStringNameToClassNameRector\Source\UniqueServiceType;
use Symfony\Component\DependencyInjection\Loader\Configurator\ContainerConfigurator;

return static function (ContainerConfigurator $containerConfigurator): void {
    $services = $containerConfigurator->services();

    $services->set(UniqueServiceType::class);
};
