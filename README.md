# flink: force link to static library in cmake

## Outline

```cmake
target_force_link_libraries(<target>
    <PRIVATE|PUBLIC|INTERFACE> <item>...
    [<PRIVATE|PUBLIC|INTERFACE> <item>...]...
)
```

The `PUBLIC, PRIVATE and INTERFACE` keywords can be used to specify both the link dependencies and the link interface in one command. Libraries and targets following PUBLIC are linked to, and are made part of the link interface. Libraries and targets following PRIVATE are linked to, but are not made part of the link interface. Libraries following INTERFACE are appended to the link interface and are not used for linking <target>.

## Example

- [fink example](example)
