/**
 * /!\ THIS CODE SHOULD BE AUTOGENERATED /!\
 * /!\ We don't have a script to do this yet but it is dangerous to do by hand /!\
 * /!\ Right now, each module you wish to asynchronously imported requires this wrapper module /!\
 */
module type HomeIntf = (module type of Home);

let importable: (module HomeIntf) = (module Home);
