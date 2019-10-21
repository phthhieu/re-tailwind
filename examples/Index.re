[%bs.raw {|require("tailwindcss/dist/tailwind.min.css")|}];

let str = ReasonReact.string;

module App = {
  [@react.component]
  let make = () =>
    <div className=Tailwind.make([`relative, `overflowHidden, `mbAuto])> {str("Hello Example")} </div>;
};

ReactDOMRe.renderToElementWithId(<App />, "root");
